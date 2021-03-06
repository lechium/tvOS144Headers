/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOActiveTileGroupMigrator.h>

@class GEOResourceManifestConfiguration, geo_isolater, NSMutableArray, NSString;

@interface GEOSearchAttributionManifestVersionMigrator : NSObject <GEOActiveTileGroupMigrator> {

	GEOResourceManifestConfiguration* _manifestConfiguration;
	geo_isolater* _isolater;
	NSMutableArray* _runningTasks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2 ;
-(id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7 ;
-(BOOL)needsMigrationForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 dataSet:(id)arg4 ;
-(void)_addRunningTask:(id)arg1 ;
-(void)_removeRunningTask:(id)arg1 ;
@end

