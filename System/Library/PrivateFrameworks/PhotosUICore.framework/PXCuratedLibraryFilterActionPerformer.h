/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>
#import <libobjc.A.dylib/PXContentFilterControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class PXUIContentFilterController, NSString;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXContentFilterControllerDelegate, UIPopoverPresentationControllerDelegate> {

	PXUIContentFilterController* _contentFilterController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)activitySystemImageName;
-(void)performUserInteractionTask;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(BOOL)performerResetsAfterCompletion;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(void)contentFilterControllerDidComplete:(id)arg1 ;
-(void)contentFilterController:(id)arg1 filterStateChanged:(id)arg2 ;
@end

