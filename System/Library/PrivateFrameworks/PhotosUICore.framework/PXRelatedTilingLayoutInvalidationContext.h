/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXTilingLayoutInvalidationContext.h>

@class PXRelatedDataSource;

@interface PXRelatedTilingLayoutInvalidationContext : PXTilingLayoutInvalidationContext {

	PXRelatedDataSource* _fromDataSource;
	PXRelatedDataSource* _toDataSource;

}

@property (nonatomic,retain) PXRelatedDataSource * fromDataSource;              //@synthesize fromDataSource=_fromDataSource - In the implementation block
@property (nonatomic,retain) PXRelatedDataSource * toDataSource;                //@synthesize toDataSource=_toDataSource - In the implementation block
-(PXRelatedDataSource *)fromDataSource;
-(void)setFromDataSource:(PXRelatedDataSource *)arg1 ;
-(PXRelatedDataSource *)toDataSource;
-(void)setToDataSource:(PXRelatedDataSource *)arg1 ;
@end

