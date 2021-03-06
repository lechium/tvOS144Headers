/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@interface PXFeedbackFileRadarViewController : UINavigationController {

	unsigned long long _collectionType;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(unsigned long long)collectionType;
-(id)initWithCollectionType:(unsigned long long)arg1 ;
-(void)_handleUserCancel:(id)arg1 ;
-(void)_handleUserConfirmation;
-(void)_handleRadarFiledWithError:(id)arg1 ;
-(void)_handleCompletion;
@end

