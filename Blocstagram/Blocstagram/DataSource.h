//
//  DataSource.h
//  
//
//  Created by Tony  Winslow on 11/21/15.
//
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
