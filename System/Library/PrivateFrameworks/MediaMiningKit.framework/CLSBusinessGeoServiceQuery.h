/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLSQueryProtocol.h>

@protocol GEOMapServiceTicket;
@class CLSPOICache, NSArray, NSString;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol> {

	CLSPOICache* _cache;
	BOOL _isCancelled;
	NSArray* _muids;
	id<GEOMapServiceTicket> _ticket;
	NSArray* _resolvedBusinessItems;

}

@property (nonatomic,readonly) BOOL isCancelled;                             //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * muids;                         //@synthesize muids=_muids - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceTicket> ticket;               //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedBusinessItems;              //@synthesize resolvedBusinessItems=_resolvedBusinessItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(BOOL)isCancelled;
-(NSArray *)muids;
-(id<GEOMapServiceTicket>)ticket;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(void)prepareForRetry;
-(id)initWithMUIDs:(id)arg1 ;
-(NSArray *)resolvedBusinessItems;
@end

