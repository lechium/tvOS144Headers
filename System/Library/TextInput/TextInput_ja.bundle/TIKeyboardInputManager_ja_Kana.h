/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <TextInput_ja/TIKeyboardInputManager_ja.h>

@class NSDictionary;

@interface TIKeyboardInputManager_ja_Kana : TIKeyboardInputManager_ja {

	BOOL _is3x3;
	BOOL _isFlickOnly;
	BOOL _knowInputMode;
	BOOL _knowHardwareMode;
	BOOL _knowSplitMode;
	NSDictionary* _kanaFlickDirectionMap_current;
	NSDictionary* _kanaFlickKeyMap_current;
	BOOL _supportsFlickAutocorrection;
	NSDictionary* _kanaFlickDirectionMap_3x3;
	NSDictionary* _kanaFlickDirectionMap_50on;
	NSDictionary* _kanaFlickKeyMap_3x3;
	NSDictionary* _kanaFlickKeyMap_50on;

}

@property (assign,nonatomic) BOOL supportsFlickAutocorrection;                       //@synthesize supportsFlickAutocorrection=_supportsFlickAutocorrection - In the implementation block
@property (nonatomic,retain) NSDictionary * kanaFlickDirectionMap_3x3;               //@synthesize kanaFlickDirectionMap_3x3=_kanaFlickDirectionMap_3x3 - In the implementation block
@property (nonatomic,retain) NSDictionary * kanaFlickDirectionMap_50on;              //@synthesize kanaFlickDirectionMap_50on=_kanaFlickDirectionMap_50on - In the implementation block
@property (nonatomic,retain) NSDictionary * kanaFlickKeyMap_3x3;                     //@synthesize kanaFlickKeyMap_3x3=_kanaFlickKeyMap_3x3 - In the implementation block
@property (nonatomic,retain) NSDictionary * kanaFlickKeyMap_50on;                    //@synthesize kanaFlickKeyMap_50on=_kanaFlickKeyMap_50on - In the implementation block
+(Class)wordSearchClass;
-(id)geometryModelData;
-(NSRange)analysisStringRange;
-(id)validCharacterSetForAutocorrection;
-(BOOL)needsTouchEvents;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)setSupportsFlickAutocorrection:(BOOL)arg1 ;
-(void)resetWordSearchWithClass:(Class)arg1 ;
-(void)buildFlickTables;
-(void)setKanaFlickDirectionMap_3x3:(NSDictionary *)arg1 ;
-(void)setKanaFlickKeyMap_3x3:(NSDictionary *)arg1 ;
-(void)setKanaFlickDirectionMap_50on:(NSDictionary *)arg1 ;
-(void)setKanaFlickKeyMap_50on:(NSDictionary *)arg1 ;
-(unsigned short)flickKeyForBaseKey:(unsigned short)arg1 direction:(int)arg2 ;
-(void)_deleteFromInput;
-(BOOL)supportsFlickAutocorrection;
-(id)geometryDataWithSubstitutedMultitapKeys:(id)arg1 ;
-(void)calculateGeometryForInput:(id)arg1 ;
-(id)liveConversionTextInputManager;
-(NSDictionary *)kanaFlickDirectionMap_3x3;
-(NSDictionary *)kanaFlickDirectionMap_50on;
-(NSDictionary *)kanaFlickKeyMap_3x3;
-(NSDictionary *)kanaFlickKeyMap_50on;
@end

