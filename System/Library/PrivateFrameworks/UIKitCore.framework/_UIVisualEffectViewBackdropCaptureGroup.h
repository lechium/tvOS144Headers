/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {

	NSPointerArray* _backdrops;
	BOOL _disableInPlaceFiltering;
	NSString* _groupName;
	NSString* _groupNamespace;
	double _scale;
	double _minimumScale;

}

@property (nonatomic,copy) NSString * groupName;                        //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * groupNamespace;                   //@synthesize groupNamespace=_groupNamespace - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double minimumScale;                       //@synthesize minimumScale=_minimumScale - In the implementation block
@property (assign,nonatomic) BOOL disableInPlaceFiltering;              //@synthesize disableInPlaceFiltering=_disableInPlaceFiltering - In the implementation block
-(id)description;
-(id)init;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)minimumScale;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupNamespace;
-(void)setGroupNamespace:(NSString *)arg1 ;
-(void)setDisableInPlaceFiltering:(BOOL)arg1 ;
-(BOOL)allowInPlaceFiltering;
-(BOOL)disableInPlaceFiltering;
-(id)initWithName:(id)arg1 scale:(double)arg2 ;
-(long long)indexOfBackdropView:(id)arg1 ;
-(void)updateAllBackdropViews;
-(id)initWithBackdrop:(id)arg1 ;
-(void)addBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)removeBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)setMinimumScale:(double)arg1 ;
-(void)applyScaleHint:(double)arg1 ;
@end

