/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXBarsController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXPhotosGridActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXPhotosGridOptionsControllerDelegate.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class NSArray, PLDateRangeFormatter, PXPhotosViewModel, PXAssetSelectionTypeCounter, PXPhotosBarButtonItemsController, PXActionPerformer, PXPhotosGridActionMenuController, PXMiroMoviePresenter, NSMapTable, NSString, PXPhotosUIViewController;

@interface PXPhotosBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXSettingsKeyObserver> {

	NSArray* _leftBarButtonItemIdentifiers;
	NSArray* _rightBarButtonItemIdentifiers;
	NSArray* _toolbarItemIdentifiers;
	PLDateRangeFormatter* _dateRangeFormatter;
	PXPhotosViewModel* _viewModel;
	PXAssetSelectionTypeCounter* _assetTypeCounter;
	PXPhotosBarButtonItemsController* _barButtonItemsController;
	PXActionPerformer* _activeActionPerformer;
	PXActionPerformer* _lastActionPerformer;
	PXPhotosGridActionMenuController* _menuController;
	PXMiroMoviePresenter* _miroMoviePresenter;
	NSMapTable* _actionTypeByBarButtonItem;
	NSString* _contentSizeCategory;
	double _interButtonSpacing;
	double _endButtonSpacing;

}

@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXPhotosUIViewController * photosViewController; 
@property (nonatomic,readonly) PXAssetSelectionTypeCounter * assetTypeCounter;                           //@synthesize assetTypeCounter=_assetTypeCounter - In the implementation block
@property (nonatomic,readonly) PXPhotosBarButtonItemsController * barButtonItemsController;              //@synthesize barButtonItemsController=_barButtonItemsController - In the implementation block
@property (nonatomic,retain) NSArray * leftBarButtonItemIdentifiers;                                     //@synthesize leftBarButtonItemIdentifiers=_leftBarButtonItemIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * rightBarButtonItemIdentifiers;                                    //@synthesize rightBarButtonItemIdentifiers=_rightBarButtonItemIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * toolbarItemIdentifiers;                                           //@synthesize toolbarItemIdentifiers=_toolbarItemIdentifiers - In the implementation block
@property (nonatomic,retain) PXActionPerformer * activeActionPerformer;                                  //@synthesize activeActionPerformer=_activeActionPerformer - In the implementation block
@property (nonatomic,retain) PXActionPerformer * lastActionPerformer;                                    //@synthesize lastActionPerformer=_lastActionPerformer - In the implementation block
@property (nonatomic,retain) PXPhotosGridActionMenuController * menuController;                          //@synthesize menuController=_menuController - In the implementation block
@property (nonatomic,retain) PXMiroMoviePresenter * miroMoviePresenter;                                  //@synthesize miroMoviePresenter=_miroMoviePresenter - In the implementation block
@property (nonatomic,readonly) NSMapTable * actionTypeByBarButtonItem;                                   //@synthesize actionTypeByBarButtonItem=_actionTypeByBarButtonItem - In the implementation block
@property (nonatomic,retain) NSString * contentSizeCategory;                                             //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) double interButtonSpacing;                                                  //@synthesize interButtonSpacing=_interButtonSpacing - In the implementation block
@property (assign,nonatomic) double endButtonSpacing;                                                    //@synthesize endButtonSpacing=_endButtonSpacing - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * dateRangeFormatter;                                //@synthesize dateRangeFormatter=_dateRangeFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(PLDateRangeFormatter *)dateRangeFormatter;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(PXPhotosViewModel *)viewModel;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)updateBars;
-(NSArray *)leftBarButtonItemIdentifiers;
-(NSArray *)rightBarButtonItemIdentifiers;
-(NSArray *)toolbarItemIdentifiers;
-(id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2 ;
-(double)fixedSpaceForInterButtonSpacing;
-(double)fixedSpaceForEndButtonSpacing;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(BOOL)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)hostViewControllerForActionPerformer:(id)arg1 ;
-(id)createAssetActionManagerForAssetReference:(id)arg1 ;
-(id)barAppearance;
-(id)_identifierForActionType:(id)arg1 ;
-(void)handleSelectBarButtonItem:(id)arg1 ;
-(void)handleCancelBarButtonItem:(id)arg1 ;
-(PXActionPerformer *)activeActionPerformer;
-(void)setActiveActionPerformer:(PXActionPerformer *)arg1 ;
-(PXActionPerformer *)lastActionPerformer;
-(void)setLastActionPerformer:(PXActionPerformer *)arg1 ;
-(PXAssetSelectionTypeCounter *)assetTypeCounter;
-(void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2 ;
-(BOOL)_actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(PXMiroMoviePresenter *)miroMoviePresenter;
-(void)setMiroMoviePresenter:(PXMiroMoviePresenter *)arg1 ;
-(double)interButtonSpacing;
-(double)endButtonSpacing;
-(NSMapTable *)actionTypeByBarButtonItem;
-(void)didChangeActionPerformerTypeForOptionsController:(id)arg1 ;
-(void)didChangeSystemItemForOptionsController:(id)arg1 ;
-(void)photosGridActionPerformer:(id)arg1 filterStateChanged:(id)arg2 ;
-(id)initWithPhotosViewController:(id)arg1 viewModel:(id)arg2 ;
-(PXPhotosUIViewController *)photosViewController;
-(void)setInterButtonSpacing:(double)arg1 ;
-(void)setEndButtonSpacing:(double)arg1 ;
-(void)handleSelectAllBarButtonItem:(id)arg1 ;
-(void)handleDeselectAllBarButtonItem:(id)arg1 ;
-(void)handleActionMenuBarButtonItem:(id)arg1 ;
-(void)handleAddButtonItem:(id)arg1 ;
-(void)_handleActionTypeBarButtonItem:(id)arg1 ;
-(void)_reloadOptionsButton;
-(void)setLeftBarButtonItemIdentifiers:(NSArray *)arg1 ;
-(void)setRightBarButtonItemIdentifiers:(NSArray *)arg1 ;
-(void)setToolbarItemIdentifiers:(NSArray *)arg1 ;
-(PXPhotosBarButtonItemsController *)barButtonItemsController;
-(PXPhotosGridActionMenuController *)menuController;
-(void)setMenuController:(PXPhotosGridActionMenuController *)arg1 ;
@end
