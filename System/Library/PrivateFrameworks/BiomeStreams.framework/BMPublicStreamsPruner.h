/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BMPublicStreamsPruner : NSObject
+(void)pruneWithInstalledApplications:(id)arg1 activity:(id)arg2 ;
+(BOOL)shouldDeleteEvent:(id)arg1 withUninstalledApplication:(id)arg2 ;
+(void)prunePublicStreamsWithPredicate:(/*^block*/id)arg1 ;
+(BOOL)shouldDeleteEvent:(id)arg1 withInstalledApplications:(id)arg2 ;
+(void)prunePublicStream:(id)arg1 configuration:(id)arg2 deletionPredicate:(/*^block*/id)arg3 ;
+(void)pruneStreamDataStore:(id)arg1 deletionPredicate:(/*^block*/id)arg2 ;
+(void)pruneWithInstalledApplications:(id)arg1 ;
+(void)pruneWithUninstalledBundleIdentifier:(id)arg1 ;
@end

