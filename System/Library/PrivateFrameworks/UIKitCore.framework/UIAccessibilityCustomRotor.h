/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSAttributedString, NSString;

@interface UIAccessibilityCustomRotor : NSObject {

	NSUUID* uuid;
	id targetElement;
	long long systemRotorType;
	NSAttributedString* _attributedName;
	/*^block*/id _itemSearchBlock;

}

@property (assign,nonatomic) BOOL visibleInTouchRotor; 
@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id targetElement; 
@property (assign,nonatomic) long long systemRotorType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (nonatomic,copy) id itemSearchBlock;                               //@synthesize itemSearchBlock=_itemSearchBlock - In the implementation block
-(id)_accessibilityAXAttributedName;
-(BOOL)visibleInTouchRotor;
-(void)setVisibleInTouchRotor:(BOOL)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSAttributedString *)attributedName;
-(id)targetElement;
-(void)setTargetElement:(id)arg1 ;
-(id)initWithSystemType:(long long)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)itemSearchBlock;
-(long long)systemRotorType;
-(id)initWithName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)initWithAttributedName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(void)setAttributedName:(NSAttributedString *)arg1 ;
-(void)setItemSearchBlock:(id)arg1 ;
-(void)setSystemRotorType:(long long)arg1 ;
@end

