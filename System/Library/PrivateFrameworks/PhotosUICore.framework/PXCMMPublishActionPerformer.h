/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer {

	NSURL* _publishedURL;

}

@property (nonatomic,retain) NSURL * publishedURL;              //@synthesize publishedURL=_publishedURL - In the implementation block
-(BOOL)isCancellable;
-(void)cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createActionProgress;
-(id)performPublishActionWithSession:(id)arg1 shareOrigin:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_completePublishActionWithSuccess:(BOOL)arg1 error:(id)arg2 shareOrigin:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSURL *)publishedURL;
-(void)setPublishedURL:(NSURL *)arg1 ;
@end

