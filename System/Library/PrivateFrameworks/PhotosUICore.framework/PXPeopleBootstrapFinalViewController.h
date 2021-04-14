/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleFlowViewController.h>

@class UILabel, PXPeopleBootstrapContext, NSString;

@interface PXPeopleBootstrapFinalViewController : UIViewController <PXPeopleFlowViewController> {

	id _context;
	UILabel* _promptLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,readonly) PXPeopleBootstrapContext * bootstrapContext; 
@property (nonatomic,__weak,readonly) UILabel * promptLabel;                                                  //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * descriptionLabel;                                             //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) id context;                                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
@property (assign,nonatomic,__weak) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)viewDidLoad;
-(CGSize)preferredSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)promptLabel;
-(UILabel *)descriptionLabel;
-(PXPeopleBootstrapContext *)bootstrapContext;
-(void)_updateNavigationBarForCurrentTraitCollection;
-(id)_localizedTitleString;
-(void)updateUI;
-(id)_localizedPromptString;
-(id)_localizedDescriptionString;
@end

