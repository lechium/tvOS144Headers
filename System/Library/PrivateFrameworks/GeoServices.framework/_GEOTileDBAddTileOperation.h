/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOTileDBWriteOperation.h>

@class GEOTileData, NSString, NSUUID;

@interface _GEOTileDBAddTileOperation : NSObject <_GEOTileDBWriteOperation> {

	GEOTileKey _key;
	unsigned _tileSet;
	GEOTileData* _data;
	NSString* _ETag;
	unsigned char _reason;
	NSUUID* _externalResourceUUID;

}

@property (nonatomic,readonly) GEOTileKey* key; 
@property (nonatomic,readonly) unsigned char reason;                        //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned char)reason;
-(GEOTileKey*)key;
-(unsigned long long)sizeInBytes;
-(void)performWithDB:(id)arg1 ;
-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg1 ;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(id)initWithTileKey:(const GEOTileKey*)arg1 tileSet:(unsigned)arg2 data:(id)arg3 ETag:(id)arg4 reason:(unsigned char)arg5 externalResourceUUID:(id)arg6 ;
@end

