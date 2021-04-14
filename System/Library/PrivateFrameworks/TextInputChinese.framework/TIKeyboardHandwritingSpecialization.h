/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization
-(BOOL)canHandleKeyHitTest;
-(BOOL)shouldExtendPriorWord;
-(id)wordSeparator;
-(id)keyboardBehaviors;
-(id)replacementForDoubleSpace;
-(id)nonstopPunctuationCharacters;
-(BOOL)supportsLearning;
@end
