/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, UITextInputMode, NSUUID;


@protocol UITextDocumentProxy <UIKeyInput>
@property (nonatomic,readonly) NSString * documentContextBeforeInput; 
@property (nonatomic,readonly) NSString * documentContextAfterInput; 
@property (nonatomic,readonly) NSString * selectedText; 
@property (nonatomic,readonly) UITextInputMode * documentInputMode; 
@property (nonatomic,copy,readonly) NSUUID * documentIdentifier; 
@required
-(NSUUID *)documentIdentifier;
-(NSString *)selectedText;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)unmarkText;
-(NSString *)documentContextBeforeInput;
-(UITextInputMode *)documentInputMode;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1;
-(NSString *)documentContextAfterInput;

@end

