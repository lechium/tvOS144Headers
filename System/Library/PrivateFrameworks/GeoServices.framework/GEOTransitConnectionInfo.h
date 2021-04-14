/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, NSURL;


@protocol GEOTransitConnectionInfo <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSURL * urlToOpen; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) int providerID; 
@required
-(NSString *)name;
-(unsigned long long)muid;
-(int)providerID;
-(NSArray *)labelItems;
-(NSURL *)urlToOpen;

@end
