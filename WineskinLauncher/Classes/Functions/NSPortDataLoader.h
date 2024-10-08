//
//  NSPortDataLoader.h
//  Wineskin Navy
//
//  Created by Vitor Marques de Miranda on 07/03/17.
//  Copyright © 2017 Vitor Marques de Miranda. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSPortManager.h"

@interface NSPortDataLoader : NSObject

+(NSString*)engineOfPortAtPath:(NSString*)path;

+(BOOL)macDriverIsEnabledAtPort:(NSPortManager*)port;

@end
