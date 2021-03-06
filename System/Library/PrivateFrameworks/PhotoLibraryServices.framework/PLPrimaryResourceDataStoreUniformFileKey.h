/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLChooserKeyProperties.h>

@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey <PLChooserKeyProperties> {

	PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 _keyStruct;

}

@property (assign,nonatomic) PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(id)_fileURLFromKeyStruct:(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1*)arg1 assetID:(id)arg2 ;
-(unsigned)resourceType;
-(id)keyData;
-(unsigned)resourceVersion;
-(BOOL)isDerivative;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(unsigned)recipeIDForAssetID:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 resourceVersion:(unsigned)arg2 resourceType:(unsigned)arg3 recipeID:(unsigned)arg4 ;
-(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1)keyStruct;
-(void)setKeyStruct:(PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1)arg1 ;
@end

