#
# Be sure to run `pod lib lint MapsIndoors.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "MapsIndoors"
  s.version          = "1.6.3"
  s.summary          = "Library for making the MapsIndoors experience available to your iOS users."
  s.description      = <<-DESC
The MapsIndoors SDK is the idea of integrating everything on your venue, like people, goods, offices, shops, rooms and buildings with the mapping, positioning and wayfinding technologies provided in the MapsIndoors platform. We make the MapsIndoors platform available to interested businesses and/or partners. So if you think you should be one of them, please call us or send us an email. Mean while, you are most welcome to check out the demo project using 'pod try MapsIndoors'.
                       DESC

s.homepage         = "http://dev.mapsindoors.com"
s.screenshots     = ["http://app.mapsindoors.com/mapsindoors/ios/mapsindoors-ios-screenshot1.png", "http://app.mapsindoors.com/mapsindoors/ios/mapsindoors-ios-screenshot2.png", "http://app.mapsindoors.com/mapsindoors/ios/mapsindoors-ios-screenshot3.png"]
 s.license          = { :type => 'Commercial', :text => <<-LICENSE
Copyright 2016 by MapsPeople A/S
LICENSE
}
  s.author           = { "MapsPeople" => "info@mapspeople.com" }
  s.source           = { :git => "https://github.com/MapsIndoors/MapsIndoorsIOS.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform     = :ios, '8.0'
  s.requires_arc = true

#s.source_files = ['Pod/Classes/MapsIndoors.m']

#  s.resource_bundles = {
#    'MapsIndoors' => ['Pod/Assets/*.png']
#}

  s.vendored_frameworks = ['MapsIndoorsSDK.framework']
  s.resources = ['MapsIndoorSDK.bundle']
  s.libraries             = "sqlite3", "c++", "icucore", "z" # required for GoogleMaps.framework
  s.frameworks            = "Accelerate", "CoreBluetooth", "AVFoundation", "CoreData", "CoreLocation", "CoreText", "Foundation", "GLKit", "ImageIO", "OpenGLES", "QuartzCore", "SystemConfiguration"

s.dependency	'JSONModel', '~> 1'
s.dependency 'GoogleMaps', '1.12.1'

  #s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }

  # s.public_header_files = 'Pod/Classes/**/*.h'


end
