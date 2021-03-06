/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray, NSURL;

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * checkInURLs; 
@property (nonatomic,readonly) NSURL * webURL; 
-(NSURL *)webURL;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(NSArray *)checkInURLs;
@end

