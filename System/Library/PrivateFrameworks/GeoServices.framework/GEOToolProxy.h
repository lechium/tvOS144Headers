/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOToolProxy
@required
-(id)ping;
-(void)unlockDBs;
-(void)lockDBs;
-(id)getDefault:(id)arg1 source:(long long*)arg2;
-(unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
-(unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
-(void)invalidateTileCache;
-(BOOL)notifyNetworkDefaultsChanged;

@end

