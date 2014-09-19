//
//  RssItem.h
//  RssReader
//
//  Created by Anuj Katiyal on 18/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RssItem : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *link;
@property (strong, nonatomic) NSString *descrip;
@property (strong, nonatomic) NSString *pubDate;

@end
