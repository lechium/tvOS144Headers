/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary, NSObject;

@interface GEOCacheUsageMonitor : NSObject {

	NSMutableDictionary* _typeToHits;
	NSMutableDictionary* _typeToMisses;
	NSMutableDictionary* _tileCacheHitData;
	NSMutableDictionary* _tileCacheMissData;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _isolationQueue;

}
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)recordTileCacheHitForReason:(unsigned char)arg1 tileSource:(unsigned char)arg2 tileKey:(const GEOTileKey*)arg3 tileSizeInBytes:(unsigned)arg4 ;
-(void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const GEOTileKey*)arg3 tileSizeInBytes:(unsigned)arg4 httpStatus:(unsigned)arg5 ;
-(void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const GEOTileKey*)arg3 loadError:(id)arg4 ;
-(void)recordCacheHitForType:(int)arg1 ;
-(void)recordCacheMissForType:(int)arg1 ;
-(void)_flush;
-(void)_startTimerIfNecessary;
-(void)_recordTileCacheEventWithKey:(id)arg1 cacheEventDict:(id)arg2 tileSizeInBytes:(unsigned)arg3 error:(id)arg4 ;
@end

