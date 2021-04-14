/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLWriteableResource.h>
#import <libobjc.A.dylib/PLValidatesResourceModel.h>

@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey, PLCodecIdentity, PLUniformTypeIdentifierIdentity;
@class NSDate, PLVirtualResourceUniformTypeIdentifierProxy, NSURL, NSString;

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel> {

	short _localAvailabilityTarget;
	short _remoteAvailability;
	short _remoteAvailabilityTarget;
	short _trashedState;
	unsigned _version;
	unsigned _resourceType;
	unsigned _recipeID;
	unsigned _orientation;
	int _qualitySortValue;
	float _scale;
	id<PLAssetID> _assetID;
	id<PLResourceDataStore> _dataStore;
	long long _dataStoreSubtype;
	id<PLResourceDataStoreKey> _dataStoreKey;
	long long _unorientedWidth;
	long long _unorientedHeight;
	id<PLCodecIdentity> _codecID;
	id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
	NSDate* _trashedDate;

}

@property (nonatomic,readonly) PLVirtualResourceUniformTypeIdentifierProxy * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (assign,nonatomic) unsigned resourceType;                                                              //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned version;                                                                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned recipeID;                                                                  //@synthesize recipeID=_recipeID - In the implementation block
@property (assign,nonatomic) unsigned orientation;                                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStore> dataStore;                                                  //@synthesize dataStore=_dataStore - In the implementation block
@property (assign,nonatomic) long long dataStoreSubtype;                                                         //@synthesize dataStoreSubtype=_dataStoreSubtype - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStoreKey> dataStoreKey;                                            //@synthesize dataStoreKey=_dataStoreKey - In the implementation block
@property (assign,nonatomic) short remoteAvailability;                                                           //@synthesize remoteAvailability=_remoteAvailability - In the implementation block
@property (assign,nonatomic) float scale;                                                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long unorientedWidth;                                                          //@synthesize unorientedWidth=_unorientedWidth - In the implementation block
@property (assign,nonatomic) long long unorientedHeight;                                                         //@synthesize unorientedHeight=_unorientedHeight - In the implementation block
@property (assign,nonatomic) int qualitySortValue;                                                               //@synthesize qualitySortValue=_qualitySortValue - In the implementation block
@property (nonatomic,retain) id<PLCodecIdentity> codecID;                                                        //@synthesize codecID=_codecID - In the implementation block
@property (nonatomic,retain) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;                        //@synthesize uniformTypeIdentifierID=_uniformTypeIdentifierID - In the implementation block
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID;                                                       //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) short localAvailability; 
@property (nonatomic,readonly) short localAvailabilityTarget;                                                    //@synthesize localAvailabilityTarget=_localAvailabilityTarget - In the implementation block
@property (nonatomic,readonly) short remoteAvailabilityTarget;                                                   //@synthesize remoteAvailabilityTarget=_remoteAvailabilityTarget - In the implementation block
@property (nonatomic,readonly) long long dataLength; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) short trashedState;                                                               //@synthesize trashedState=_trashedState - In the implementation block
@property (nonatomic,readonly) NSDate * trashedDate;                                                             //@synthesize trashedDate=_trashedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(NSURL *)fileURL;
-(unsigned)version;
-(float)scale;
-(void)setVersion:(unsigned)arg1 ;
-(void)setScale:(float)arg1 ;
-(unsigned)orientation;
-(void)setOrientation:(unsigned)arg1 ;
-(unsigned)resourceType;
-(void)setResourceType:(unsigned)arg1 ;
-(long long)estimatedDataLength;
-(long long)dataLength;
-(unsigned long long)cplType;
-(short)trashedState;
-(unsigned)recipeID;
-(void)setRecipeID:(unsigned)arg1 ;
-(short)localAvailability;
-(BOOL)isDerivative;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(id<PLAssetID>)assetID;
-(PLVirtualResourceUniformTypeIdentifierProxy *)uniformTypeIdentifier;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(id<PLResourceDataStore>)dataStore;
-(NSDate *)trashedDate;
-(void)setRemoteAvailability:(short)arg1 ;
-(short)remoteAvailability;
-(void)setUnorientedHeight:(long long)arg1 ;
-(void)setUnorientedWidth:(long long)arg1 ;
-(void)setQualitySortValue:(int)arg1 ;
-(int)qualitySortValue;
-(id<PLCodecIdentity>)codecID;
-(void)setDataStoreSubtype:(long long)arg1 ;
-(void)setUniformTypeIdentifierID:(id<PLUniformTypeIdentifierIdentity>)arg1 ;
-(void)setDataStore:(id<PLResourceDataStore>)arg1 ;
-(void)setDataStoreKey:(id<PLResourceDataStoreKey>)arg1 ;
-(void)setCodecID:(id<PLCodecIdentity>)arg1 ;
-(id)initWithRecipe:(id)arg1 forAsset:(id)arg2 ;
-(short)localAvailabilityTarget;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(BOOL)isInCloud;
-(BOOL)isDefaultOrientation;
-(BOOL)isPlayableVideo;
-(float)scaleGivenAssetHasAdjustments:(BOOL)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3 ;
-(long long)orientedWidth;
-(long long)orientedHeight;
-(long long)dataStoreSubtype;
-(short)remoteAvailabilityTarget;
-(id)photosCTLJSONDict;
-(id)singleLineDescription;
-(id)initWithAsset:(id)arg1 resourceType:(unsigned)arg2 version:(unsigned)arg3 recipeID:(unsigned)arg4 ;
@end

