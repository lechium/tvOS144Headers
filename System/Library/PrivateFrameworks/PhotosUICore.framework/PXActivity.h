/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/PXActivity.h>

@protocol PXActivity <NSObject>
@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController; 
@required
-(id<PXActivityItemSourceController>)itemSourceController;
-(void)setItemSourceController:(id)arg1;

@end


@protocol PXActivityItemSourceController, PXActivityActionDelegate, PXActivityDataSource;
@class UIImage, NSString;

@interface PXActivity : UIActivity <PXActivity> {

	SCD_Struct_PX58 _dataSourceFlags;
	UIImage* _cachedCustomImage;
	UIImage* _cachedSmallCustomImage;
	NSString* _internalActivityType;
	id<PXActivityItemSourceController> _itemSourceController;
	NSString* _actionTitle;
	NSString* _actionType;
	NSString* _systemImageName;
	/*^block*/id _performActivityActionHandler;
	/*^block*/id _canPerformActivityActionHandler;
	id<PXActivityActionDelegate> _actionDelegate;
	id<PXActivityDataSource> _dataSource;

}

@property (nonatomic,copy) NSString * actionTitle;                                                        //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) NSString * actionType;                                                         //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * systemImageName;                                                    //@synthesize systemImageName=_systemImageName - In the implementation block
@property (nonatomic,copy) id performActivityActionHandler;                                               //@synthesize performActivityActionHandler=_performActivityActionHandler - In the implementation block
@property (nonatomic,copy) id canPerformActivityActionHandler;                                            //@synthesize canPerformActivityActionHandler=_canPerformActivityActionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<PXActivityActionDelegate> actionDelegate;                          //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXActivityDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_destructiveActivities;
+(id)activityWithActionTitle:(id)arg1 actionType:(id)arg2 activityType:(id)arg3 systemImageName:(id)arg4 ;
-(NSString *)description;
-(id)activityType;
-(NSString *)systemImageName;
-(id)_systemImageName;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id<PXActivityDataSource>)dataSource;
-(void)setDataSource:(id<PXActivityDataSource>)arg1 ;
-(void)setActionDelegate:(id<PXActivityActionDelegate>)arg1 ;
-(id<PXActivityActionDelegate>)actionDelegate;
-(void)setSystemImageName:(NSString *)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(NSString *)actionTitle;
-(id)activityTitle;
-(id<PXActivityItemSourceController>)itemSourceController;
-(void)setItemSourceController:(id<PXActivityItemSourceController>)arg1 ;
-(id)initWithActionTitle:(id)arg1 actionType:(id)arg2 activityType:(id)arg3 systemImageName:(id)arg4 ;
-(id)px_activityImageNamed:(id)arg1 ;
-(id)px_activitySettingsImageNamed:(id)arg1 ;
-(void)updateActivityViewControllerVisibleShareActions;
-(void)tearDownForCompletion;
-(id)createActivityBundleImageConfigurationForBundle:(id)arg1 imageNamed:(id)arg2 activityCategory:(long long)arg3 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)performActivityActionHandler;
-(void)setPerformActivityActionHandler:(id)arg1 ;
-(id)canPerformActivityActionHandler;
-(void)setCanPerformActivityActionHandler:(id)arg1 ;
@end

