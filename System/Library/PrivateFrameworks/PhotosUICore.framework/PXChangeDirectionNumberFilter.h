/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXNumberFilter.h>

@interface PXChangeDirectionNumberFilter : PXNumberFilter {

	double _threshold;
	double _minimumChange;

}

@property (assign,nonatomic) double minimumChange;              //@synthesize minimumChange=_minimumChange - In the implementation block
-(id)initWithInput:(double)arg1 ;
-(double)updatedOutput;
-(double)initialOutputForInput:(double)arg1 ;
-(double)minimumChange;
-(void)setMinimumChange:(double)arg1 ;
@end

