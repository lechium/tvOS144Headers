/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITraitCollection;

@interface PKExtendedTraitCollection : NSObject {

	long long _layoutSizeClass;
	long long _layoutSizeSubclass;
	long long _userInterfaceIdiom;
	long long _userInterfaceStyle;
	double _displayScale;
	UITraitCollection* _traitCollectionForMapKit;

}

@property (assign,nonatomic) long long layoutSizeClass;                                 //@synthesize layoutSizeClass=_layoutSizeClass - In the implementation block
@property (assign,nonatomic) long long layoutSizeSubclass;                              //@synthesize layoutSizeSubclass=_layoutSizeSubclass - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;                              //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                              //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (assign,nonatomic) double displayScale;                                       //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollectionForMapKit;              //@synthesize traitCollectionForMapKit=_traitCollectionForMapKit - In the implementation block
-(id)description;
-(long long)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(long long)userInterfaceStyle;
-(double)displayScale;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(void)setTraitCollectionForMapKit:(UITraitCollection *)arg1 ;
-(void)setLayoutSizeSubclass:(long long)arg1 ;
-(long long)layoutSizeClass;
-(void)setLayoutSizeClass:(long long)arg1 ;
-(long long)layoutSizeSubclass;
-(UITraitCollection *)traitCollectionForMapKit;
@end

