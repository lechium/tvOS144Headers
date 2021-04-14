/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest {

	NSArray* _subrequests;

}

@property (retain) NSArray * subrequests;              //@synthesize subrequests=_subrequests - In the implementation block
-(id)outputPathExtension;
-(id)outputFileType;
-(BOOL)prepareWithError:(id*)arg1 ;
-(BOOL)requiresMetadataChanges;
-(BOOL)requiresFormatConversion;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(NSArray *)subrequests;
-(void)setSubrequests:(NSArray *)arg1 ;
@end
