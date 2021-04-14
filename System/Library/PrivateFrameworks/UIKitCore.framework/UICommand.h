/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@class NSString, NSArray, UIImage;

@interface UICommand : UIMenuElement <_UIMenuLeaf> {

	NSString* _discoverabilityTitle;
	SEL _action;
	id _propertyList;
	unsigned long long _attributes;
	long long _state;
	NSArray* _alternates;
	id __target;

}

@property (nonatomic,readonly) id _target;                                   //@synthesize _target=__target - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;                  //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (nonatomic,readonly) SEL action;                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id propertyList;                              //@synthesize propertyList=_propertyList - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSArray * alternates;                         //@synthesize alternates=_alternates - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_defaultCommands;
+(id)_defaultCommandForAction:(SEL)arg1 ;
+(id)commandWithTitle:(id)arg1 imageName:(id)arg2 action:(SEL)arg3 ;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 ;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_target;
-(id)_identifier;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)propertyList;
-(unsigned long long)attributes;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAttributes:(unsigned long long)arg1 ;
-(SEL)action;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCommand:(id)arg1 ;
-(BOOL)isLeaf;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(BOOL)requiresAuthenticatedInput;
-(id)_immutableCopy;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(long long)_leafKeyModifierFlags;
-(BOOL)_isDefaultCommand;
-(void)_performWithTarget:(id)arg1 ;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
-(NSString *)discoverabilityTitle;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 propertyList:(id)arg5 alternates:(id)arg6 discoverabilityTitle:(id)arg7 attributes:(unsigned long long)arg8 state:(long long)arg9 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8 ;
-(id)_alternateForModifierFlags:(long long)arg1 ;
-(NSArray *)alternates;
@end
