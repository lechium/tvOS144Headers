/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MAFloatVector, NSArray;

@interface PGFingerprint : NSObject {

	MAFloatVector* floatArray;
	NSArray* featureNames;

}

@property (nonatomic,copy) MAFloatVector * floatArray; 
@property (nonatomic,copy) NSArray * featureNames; 
+(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4 ;
+(id)assetFingerprintWithVersion:(long long)arg1 forAsset:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)assetFingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)assetFingerprintsDataframeWithVersion:(long long)arg1 forAssets:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)_assetFingerprintWithFeatureExtractor:(id)arg1 forAsset:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4 ;
+(id)assetCollectionFingerprintWithVersion:(long long)arg1 forAssetCollection:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)assetCollectionFingerprintsWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)assetCollectionFingerprintsDataframeWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)featureNames;
-(BOOL)isEqualToFingerprint:(id)arg1 ;
-(MAFloatVector *)floatArray;
-(id)initWithFloatArray:(id)arg1 withFeatureNames:(id)arg2 ;
-(void)setFloatArray:(MAFloatVector *)arg1 ;
-(void)setFeatureNames:(NSArray *)arg1 ;
@end

