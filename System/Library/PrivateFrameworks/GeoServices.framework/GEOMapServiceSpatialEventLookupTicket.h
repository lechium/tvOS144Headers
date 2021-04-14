/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, GEOMapServiceTraits;


@protocol GEOMapServiceSpatialEventLookupTicket <NSObject>
@property (nonatomic,readonly) NSArray * parameters; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)cancel;
-(NSArray *)parameters;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 queue:(id)arg3;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2;

@end

