/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray, geo_isolater, GEOTileKeyMap;

@interface GEORegionalResourcesTileRequester : GEOTileRequester {

	NSMutableArray* _loaders;
	geo_isolater* _loadersIsolater;
	GEOTileKeyMap* _signpostIDs;
	geo_isolater* _signpostIDsIsolater;

}
+(unsigned char)tileProviderIdentifier;
-(void)cancel;
-(void)start;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)_generateEndSignpostEventIfNecessary:(GEOTileKey)arg1 ;
@end
