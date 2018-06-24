//
//  MPTransitStop.h
//  MapsIndoorsSDK
//
//  Created by Daniel Nielsen on 24/11/2016.
//  Copyright  Daniel-Nielsen. All rights reserved.
//

#import "MPJSONModel.h"
#import "MPRouteProperty.h"

@interface MPTransitStop : MPJSONModel

//The name of the transit station/stop. eg. "Union Square".
@property (nonatomic, strong, nullable) NSString<Optional>* name;
//The location of the transit station/stop, represented as a lat and lng field.
@property (nonatomic, strong, nullable) MPRouteProperty<Optional>* location;

@end
