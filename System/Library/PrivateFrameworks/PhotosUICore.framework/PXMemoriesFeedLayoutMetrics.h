/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@class PXMemoriesSpec;

@interface PXMemoriesFeedLayoutMetrics : PXLayoutMetrics {

	PXMemoriesSpec* _spec;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) PXMemoriesSpec * spec;                   //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)contentInsets;
-(PXMemoriesSpec *)spec;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setSpec:(PXMemoriesSpec *)arg1 ;
@end

