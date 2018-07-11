//
//  LocationDisplayRules.h
//  MapsIndoors SDK for iOS
//
//  Created by Daniel Nielsen on 7/30/13.
//  Copyright (c) 2017 MapsPeople A/S. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MPLocationDisplayRule.h"

@class MPLocationDisplayRule;

/**
 This class holds a ruleset that defines how and when to show different location markers.
 */
@interface MPLocationDisplayRuleset : MPJSONModel

/**
 The base url to the bundle containing the icons for this ruleset. Set the value to your bundle identifier.
 */
@property NSString *iconBaseUrl;

/**
 Array of display rules.
 */
@property NSMutableArray *displayRules;

/**
 Add a displayRule to the collection of display rules.
 Prefer using this method instead of accessing the displayRules-array directly.

 @param displayRule DisplayRule to add.
 */
- (void) addDisplayRule:(MPLocationDisplayRule*)displayRule;

/**
 Method for retrieving the first occurence of a rule based on a set of rule names.
 */
- (MPLocationDisplayRule*)getRule:(NSArray*) ruleNames;

/**
 Get the first occurence of a rule based on a rule name.
 */
- (MPLocationDisplayRule*)firstOccur:(NSString*) ruleName;

- (NSArray*)getListOfNamesOnZoomLevel:(float) zoom;

/**
 Method for retrieving the first occurence of a rules icon based on a set of rule names.
 */
- (UIImage *)getIcon:(NSArray*) ruleNames;

/**
 Fetch all the ruleset icons and store them into memory.
 */
- (void)fetchIcons;

@end
