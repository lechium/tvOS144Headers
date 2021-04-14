/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeatureExtractor.h>

@interface PGFeatureExtractorPhotoLibrarySize : PGFeatureExtractor
+(BOOL)preCalculatePhotoLibrarySizeWithPhotoLibrary:(id)arg1 ;
+(id)_allAssetsOfType:(long long)arg1 withOptions:(id)arg2 ;
+(void)resetPreCalculatedPhotoLibrarySize;
+(unsigned long long)preCalculatedPhotoLibrarySize;
+(void)setPreCalculatedPhotoLibrarySize:(unsigned long long)arg1 ;
-(id)name;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureLength;
@end

