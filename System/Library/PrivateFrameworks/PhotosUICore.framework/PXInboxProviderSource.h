/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXInboxProviderSource <NSObject>
@property (nonatomic,readonly) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider; 
@property (nonatomic,readonly) id<PXInboxModelMediaProvider> mediaProvider; 
@property (nonatomic,readonly) id<PXInboxModelTitleProvider> titleProvider; 
@required
-(id<PXInboxModelTitleProvider>)titleProvider;
-(id<PXInboxModelMediaProvider>)mediaProvider;
-(id<PXInboxModelDetailViewControllerProvider>)detailViewControllerProvider;

@end

