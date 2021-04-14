/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@protocol PXFavoritesSettingsDelegate;
@class NSArray;

@interface PXFavoritesSettings : PXSettings {

	BOOL _didEncounterUnknownSettingsClassName;
	id<PXFavoritesSettingsDelegate> _delegate;
	NSArray* _favoritesSettingsClassNames;

}

@property (assign,nonatomic,__weak) id<PXFavoritesSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * favoritesSettingsClassNames;                          //@synthesize favoritesSettingsClassNames=_favoritesSettingsClassNames - In the implementation block
+(id)sharedInstance;
+(id)transientProperties;
+(id)favoritesSubmoduleWithFavoritesSettingsKeyPath:(id)arg1 delegate:(id)arg2 ;
-(id<PXFavoritesSettingsDelegate>)delegate;
-(void)setDelegate:(id<PXFavoritesSettingsDelegate>)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)parentSettings;
-(void)_requestFavoriteSettingsAtIndex:(long long)arg1 fromViewController:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_keyForFavoriteExistingAtIndex:(long long)arg1 ;
-(id)_keyForFavoriteNameAtIndex:(long long)arg1 ;
-(BOOL)isFavoriteSettings:(id)arg1 ;
-(void)setIsFavorite:(BOOL)arg1 settings:(id)arg2 ;
-(void)setFavoritesSettingsClassNames:(NSArray *)arg1 ;
-(void)_notifyChange;
-(void)_performBlockAfterLoadingAccessorySettings:(/*^block*/id)arg1 ;
-(NSArray *)favoritesSettingsClassNames;
@end

