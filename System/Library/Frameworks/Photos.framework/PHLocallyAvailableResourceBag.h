/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHRecyclableObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;
@class NSString;

@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject, NSCopying> {

	BOOL _keyIsHintBased;
	BOOL _isDegraded;
	BOOL _isPrimaryFormat;
	BOOL _isDefaultOrientation;
	id<PLAssetID> _assetID;
	id<PLResourceDataStore> _dataStore;
	id<PLResourceDataStoreKey> _dataStoreKey;

}

@property (nonatomic,retain) id<PLAssetID> assetID;                                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStore> dataStore;                    //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStoreKey> dataStoreKey;              //@synthesize dataStoreKey=_dataStoreKey - In the implementation block
@property (assign,nonatomic) BOOL keyIsHintBased;                                  //@synthesize keyIsHintBased=_keyIsHintBased - In the implementation block
@property (assign,nonatomic) BOOL isDegraded;                                      //@synthesize isDegraded=_isDegraded - In the implementation block
@property (assign,nonatomic) BOOL isPrimaryFormat;                                 //@synthesize isPrimaryFormat=_isPrimaryFormat - In the implementation block
@property (assign,nonatomic) BOOL isDefaultOrientation;                            //@synthesize isDefaultOrientation=_isDefaultOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)resourceURL;
-(void)prepareForReuse;
-(id)resourceData;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(id<PLAssetID>)assetID;
-(id<PLResourceDataStore>)dataStore;
-(void)setDataStore:(id<PLResourceDataStore>)arg1 ;
-(void)setDataStoreKey:(id<PLResourceDataStoreKey>)arg1 ;
-(BOOL)isDefaultOrientation;
-(void)setAssetID:(id<PLAssetID>)arg1 ;
-(BOOL)isDegraded;
-(BOOL)keyIsHintBased;
-(void)setKeyIsHintBased:(BOOL)arg1 ;
-(void)setIsDegraded:(BOOL)arg1 ;
-(BOOL)isPrimaryFormat;
-(void)setIsPrimaryFormat:(BOOL)arg1 ;
-(void)setIsDefaultOrientation:(BOOL)arg1 ;
@end

