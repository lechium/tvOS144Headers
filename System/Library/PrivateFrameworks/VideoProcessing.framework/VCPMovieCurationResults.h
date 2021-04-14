/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHAsset, NSMutableArray;

@interface VCPMovieCurationResults : NSObject {

	PHAsset* _phAsset;
	NSMutableArray* _highlights;

}

@property (nonatomic,readonly) PHAsset * phAsset;                               //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * highlights;              //@synthesize highlights=_highlights - In the implementation block
-(id)initWithPHAsset:(id)arg1 ;
-(PHAsset *)phAsset;
-(NSMutableArray *)highlights;
@end
