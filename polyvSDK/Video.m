//
//  Video.m
//  polyvSDK
//
//  Created by seanwong on 8/16/15.
//  Copyright (c) 2015 easefun. All rights reserved.
//

#import "Video.h"
#import "PolyvSettings.h"
@implementation Video

@synthesize title;
@synthesize desc;
@synthesize vid;
@synthesize piclink;
@synthesize duration;
@synthesize filesize;
@synthesize allfilesize;
@synthesize level;
@synthesize df;
@synthesize percent;
@synthesize status;


- (id)initWithVid:(NSString*)_vid {
    if (self = [super init]) {
        NSDictionary*item = [PolyvSettings loadVideoJson:_vid];
        //self.title = [item objectForKey:@"title"];
        self.duration = [item objectForKey:@"duration"];
        self.desc = [item objectForKey:@"duration"];
        self.piclink = [item objectForKey:@"first_image"];
        self.df = [[item objectForKey:@"df_num"] intValue];
        self.allfilesize = [item objectForKey:@"filesize"];
    }
    return self;
}


@end