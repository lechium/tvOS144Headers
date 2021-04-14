/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding> {

	BOOL __wantsFullScreen;
	BOOL __wantsBottomAttachedInCompactHeight;
	BOOL __widthFollowsPreferredContentSizeWhenBottomAttached;
	BOOL __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
	long long __mode;
	NSArray* __detents;
	long long __indexOfCurrentDetent;
	long long __indexOfLastUndimmedDetent;

}

@property (assign,setter=_setWantsFullScreen:,nonatomic) BOOL _wantsFullScreen;                                                                                              //@synthesize _wantsFullScreen=__wantsFullScreen - In the implementation block
@property (assign,setter=_setWantsBottomAttachedInCompactHeight:,nonatomic) BOOL _wantsBottomAttachedInCompactHeight;                                                        //@synthesize _wantsBottomAttachedInCompactHeight=__wantsBottomAttachedInCompactHeight - In the implementation block
@property (assign,setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:,nonatomic) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached;                        //@synthesize _widthFollowsPreferredContentSizeWhenBottomAttached=__widthFollowsPreferredContentSizeWhenBottomAttached - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long _mode;                                                                                                               //@synthesize _mode=__mode - In the implementation block
@property (setter=_setDetents:,nonatomic,copy) NSArray * _detents;                                                                                                           //@synthesize _detents=__detents - In the implementation block
@property (assign,setter=_setIndexOfCurrentDetent:,nonatomic) long long _indexOfCurrentDetent;                                                                               //@synthesize _indexOfCurrentDetent=__indexOfCurrentDetent - In the implementation block
@property (assign,setter=_setIndexOfLastUndimmedDetent:,nonatomic) long long _indexOfLastUndimmedDetent;                                                                     //@synthesize _indexOfLastUndimmedDetent=__indexOfLastUndimmedDetent - In the implementation block
@property (assign,setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:,nonatomic) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;              //@synthesize _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge=__prefersScrollingExpandsToLargerDetentWhenScrolledToEdge - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_fullScreenConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_mode;
-(void)_setDetents:(id)arg1 ;
-(void)_setWantsBottomAttachedInCompactHeight:(BOOL)arg1 ;
-(void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(BOOL)arg1 ;
-(void)_setMode:(long long)arg1 ;
-(NSArray *)_detents;
-(long long)_indexOfCurrentDetent;
-(void)_setIndexOfCurrentDetent:(long long)arg1 ;
-(long long)_indexOfLastUndimmedDetent;
-(void)_setIndexOfLastUndimmedDetent:(long long)arg1 ;
-(BOOL)_wantsFullScreen;
-(BOOL)_wantsBottomAttachedInCompactHeight;
-(BOOL)_widthFollowsPreferredContentSizeWhenBottomAttached;
-(BOOL)_prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
-(void)_setWantsFullScreen:(BOOL)arg1 ;
-(void)_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:(BOOL)arg1 ;
@end

