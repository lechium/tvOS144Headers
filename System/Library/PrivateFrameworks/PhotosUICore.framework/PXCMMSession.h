/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXTapToRadar.h>

@class NSDictionary, PXAssetsDataSourceManager, PXUIMediaProvider, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMSendBackSuggestionSource, PXCMMActionManager, PXCMMViewModel, NSString, PXMomentShareStatus, NSSet;

@interface PXCMMSession : NSObject <PXTapToRadar> {

	BOOL _hideActionMenu;
	BOOL _ppt_presentComposeRecipientView;
	BOOL _ppt_scrollComposeRecipientsView;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXUIMediaProvider* _mediaProvider;
	PXCMMPeopleSuggestionsDataSourceManager* _peopleSuggestionsPreviewDataSourceManager;
	PXCMMPeopleSuggestionsDataSourceManager* _peopleSuggestionsDataSourceManager;
	PXCMMPeopleSuggestionsMediaProvider* _peopleSuggestionsMediaProvider;
	PXCMMSendBackSuggestionSource* _sendBackSuggestionSource;
	PXCMMActionManager* _actionManager;
	unsigned long long _activityType;
	unsigned long long _sourceType;
	NSDictionary* _preparationOptionsPerAsset;
	PXCMMViewModel* _viewModel;
	NSString* _importSessionID;
	PXMomentShareStatus* _momentShareStatus;
	double _ppt_delay;

}

@property (nonatomic,readonly) NSDictionary * diagnosticDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PXAssetsDataSourceManager * dataSourceManager;                                                    //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXUIMediaProvider * mediaProvider;                                                                //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXCMMPeopleSuggestionsDataSourceManager * peopleSuggestionsPreviewDataSourceManager;              //@synthesize peopleSuggestionsPreviewDataSourceManager=_peopleSuggestionsPreviewDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXCMMPeopleSuggestionsDataSourceManager * peopleSuggestionsDataSourceManager;                     //@synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXCMMPeopleSuggestionsMediaProvider * peopleSuggestionsMediaProvider;                             //@synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider - In the implementation block
@property (nonatomic,readonly) PXCMMSendBackSuggestionSource * sendBackSuggestionSource;                                         //@synthesize sendBackSuggestionSource=_sendBackSuggestionSource - In the implementation block
@property (nonatomic,readonly) PXCMMActionManager * actionManager;                                                               //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;                                                                  //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                                                    //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) BOOL hideActionMenu;                                                                              //@synthesize hideActionMenu=_hideActionMenu - In the implementation block
@property (nonatomic,readonly) NSDictionary * preparationOptionsPerAsset;                                                        //@synthesize preparationOptionsPerAsset=_preparationOptionsPerAsset - In the implementation block
@property (nonatomic,readonly) NSSet * notificationSuppressionContexts; 
@property (nonatomic,readonly) PXCMMViewModel * viewModel;                                                                       //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) id<PXAssetImportStatusManager> importStatusManager; 
@property (nonatomic,readonly) NSString * importSessionID;                                                                       //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,readonly) PXMomentShareStatus * momentShareStatus;                                                          //@synthesize momentShareStatus=_momentShareStatus - In the implementation block
@property (assign,nonatomic) double ppt_delay;                                                                                   //@synthesize ppt_delay=_ppt_delay - In the implementation block
@property (nonatomic,readonly) BOOL ppt_presentComposeRecipientView;                                                             //@synthesize ppt_presentComposeRecipientView=_ppt_presentComposeRecipientView - In the implementation block
@property (nonatomic,readonly) BOOL ppt_scrollComposeRecipientsView;                                                             //@synthesize ppt_scrollComposeRecipientsView=_ppt_scrollComposeRecipientsView - In the implementation block
+(id)new;
-(id)init;
-(unsigned long long)activityType;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)sourceType;
-(NSString *)importSessionID;
-(PXCMMViewModel *)viewModel;
-(NSSet *)notificationSuppressionContexts;
-(PXUIMediaProvider *)mediaProvider;
-(PXAssetsDataSourceManager *)dataSourceManager;
-(PXCMMActionManager *)actionManager;
-(PXCMMPeopleSuggestionsMediaProvider *)peopleSuggestionsMediaProvider;
-(id)momentShareStatusPresentationWithPresentationStyle:(long long)arg1 ;
-(id<PXAssetImportStatusManager>)importStatusManager;
-(PXCMMPeopleSuggestionsDataSourceManager *)peopleSuggestionsPreviewDataSourceManager;
-(PXCMMPeopleSuggestionsDataSourceManager *)peopleSuggestionsDataSourceManager;
-(PXCMMSendBackSuggestionSource *)sendBackSuggestionSource;
-(BOOL)hideActionMenu;
-(NSDictionary *)preparationOptionsPerAsset;
-(PXMomentShareStatus *)momentShareStatus;
-(double)ppt_delay;
-(void)setPpt_delay:(double)arg1 ;
-(BOOL)ppt_presentComposeRecipientView;
-(BOOL)ppt_scrollComposeRecipientsView;
-(NSDictionary *)diagnosticDictionary;
@end

