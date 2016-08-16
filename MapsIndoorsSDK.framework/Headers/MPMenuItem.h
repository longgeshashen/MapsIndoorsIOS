//
//  MPMenuItem.h
//  MapsIndoorsSDK
//
//  Created by Daniel Nielsen on 08/08/16.
//  Copyright © 2016 Daniel Nielsen. All rights reserved.
//

#import <Foundation/Foundation.h>
@import JSONModel;


@protocol MPMenuItem
@end

@interface MPMenuItem : JSONModel

@property (nonatomic, strong) NSString<Optional>* categoryKey;
@property (nonatomic, strong) NSString<Optional>* menuImageUrl;
@property (nonatomic, strong) NSString<Optional>* iconUrl;

@end



