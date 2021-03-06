/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSSpecifierControllerDelegate;
@class UIViewController, PSSpecifier, NSMutableArray;

@interface PSSpecifierController : NSObject {

	UIViewController*<PSSpecifierControllerDelegate> _viewController;
	PSSpecifier* _specifier;
	NSMutableArray* _specifiers;
	NSMutableArray* _bundleControllers;
	NSMutableArray* _groups;

}

@property (nonatomic,retain) NSMutableArray * specifiers;                                                         //@synthesize specifiers=_specifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * bundleControllers;                                                  //@synthesize bundleControllers=_bundleControllers - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                                                             //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PSSpecifierControllerDelegate> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                             //@synthesize specifier=_specifier - In the implementation block
-(id)init;
-(PSSpecifier *)specifier;
-(NSMutableArray *)groups;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(void)setViewController:(UIViewController*<PSSpecifierControllerDelegate>)arg1 ;
-(UIViewController*<PSSpecifierControllerDelegate>)viewController;
-(long long)numberOfSections;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(NSMutableArray *)specifiers;
-(void)reloadSpecifiers;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(long long)indexForIndexPath:(id)arg1 ;
-(id)specifierAtIndex:(long long)arg1 ;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifier:(id)arg3 ;
-(long long)indexOfGroup:(long long)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(void)prepareSpecifiersMetadata;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 ;
-(void)createGroupIndices;
-(id)specifierForID:(id)arg1 ;
-(BOOL)_getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4 ;
-(id)_createGroupIndices:(id)arg1 ;
-(id)specifierAtIndexPath:(id)arg1 ;
-(void)setSpecifiers:(NSMutableArray *)arg1 ;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierID:(id)arg3 ;
-(void)setBundleControllers:(NSMutableArray *)arg1 ;
-(id)loadSpecifiers;
-(NSMutableArray *)bundleControllers;
@end

