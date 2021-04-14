/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray, TIInputContextHistory, TIKeyboardLayout, TIKeyboardLayoutState, TIDocumentState, TIKeyboardSecureCandidateRenderTraits, TIKeyboardCandidate, TITextInputTraits, NSDictionary;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI12 _mask;
	SCD_Union_TI14 _autocorrectionListUIState;
	int _shiftState;
	NSUUID* _documentIdentifier;
	NSString* _clientIdentifier;
	NSString* _inputMode;
	NSArray* _auxiliaryInputModeLanguages;
	NSString* _recipientIdentifier;
	TIInputContextHistory* _inputContextHistory;
	TIKeyboardLayout* _keyLayout;
	TIKeyboardLayoutState* _layoutState;
	TIDocumentState* _documentState;
	TIKeyboardSecureCandidateRenderTraits* _secureCandidateRenderTraits;
	NSString* _inputForMarkedText;
	NSString* _searchStringForMarkedText;
	TIKeyboardCandidate* _currentCandidate;
	TITextInputTraits* _textInputTraits;
	NSString* _responseContext;
	unsigned long long _autofillMode;
	NSDictionary* _autofillContext;
	NSArray* _supportedPayloadIds;
	NSArray* _statisticChanges;

}

@property (nonatomic,retain) NSUUID * documentIdentifier;                                                    //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * inputMode;                                                             //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSArray * auxiliaryInputModeLanguages;                                            //@synthesize auxiliaryInputModeLanguages=_auxiliaryInputModeLanguages - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                                   //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,retain) TIInputContextHistory * inputContextHistory;                                    //@synthesize inputContextHistory=_inputContextHistory - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                                                   //@synthesize keyLayout=_keyLayout - In the implementation block
@property (assign,nonatomic) int shiftState;                                                                 //@synthesize shiftState=_shiftState - In the implementation block
@property (nonatomic,copy) TIKeyboardLayoutState * layoutState;                                              //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,retain) TIDocumentState * documentState;                                                //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,copy) TIKeyboardSecureCandidateRenderTraits * secureCandidateRenderTraits;              //@synthesize secureCandidateRenderTraits=_secureCandidateRenderTraits - In the implementation block
@property (nonatomic,copy) NSString * inputForMarkedText;                                                    //@synthesize inputForMarkedText=_inputForMarkedText - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                                             //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * currentCandidate;                                         //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (assign,nonatomic) BOOL userSelectedCurrentCandidate; 
@property (assign,nonatomic) BOOL shouldSkipCandidateSelection; 
@property (assign,nonatomic) BOOL suppressingCandidateSelection; 
@property (assign,nonatomic) BOOL needsCandidateMetadata; 
@property (assign,nonatomic) BOOL keyboardEventsLagging; 
@property (assign,nonatomic) BOOL hardwareKeyboardMode; 
@property (assign,nonatomic) BOOL splitKeyboardMode; 
@property (assign,nonatomic) BOOL floatingKeyboardMode; 
@property (assign,nonatomic) BOOL landscapeOrientation; 
@property (assign,nonatomic) BOOL omitEmojiCandidates; 
@property (assign,nonatomic) BOOL emojiSearchMode; 
@property (assign,nonatomic) BOOL emojiPopoverMode; 
@property (assign,nonatomic) BOOL wordLearningEnabled; 
@property (assign,nonatomic) BOOL autocorrectionEnabled; 
@property (assign,nonatomic) BOOL shortcutConversionEnabled; 
@property (assign,nonatomic) BOOL candidateSelectionPredictionEnabled; 
@property (assign,nonatomic) BOOL autocapitalizationEnabled; 
@property (nonatomic,retain) TITextInputTraits * textInputTraits;                                            //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,copy) NSString * responseContext;                                                       //@synthesize responseContext=_responseContext - In the implementation block
@property (assign,nonatomic) unsigned long long autocapitalizationType; 
@property (assign,nonatomic) unsigned long long keyboardType; 
@property (assign,nonatomic) BOOL secureTextEntry; 
@property (assign,nonatomic) BOOL autocorrectionListUIDisplayed; 
@property (assign,nonatomic) BOOL autocorrectionListUIAutoDisplayMode; 
@property (assign,nonatomic) BOOL canSendCurrentLocation; 
@property (assign,nonatomic) BOOL isScreenLocked; 
@property (assign,nonatomic) BOOL longPredictionListEnabled; 
@property (assign,nonatomic) BOOL needAutofill; 
@property (assign,nonatomic) unsigned long long autofillMode;                                                //@synthesize autofillMode=_autofillMode - In the implementation block
@property (nonatomic,retain) NSDictionary * autofillContext;                                                 //@synthesize autofillContext=_autofillContext - In the implementation block
@property (assign,nonatomic) BOOL needOneTimeCodeAutofill; 
@property (nonatomic,readonly) BOOL needContactAutofill; 
@property (nonatomic,copy) NSArray * supportedPayloadIds;                                                    //@synthesize supportedPayloadIds=_supportedPayloadIds - In the implementation block
@property (nonatomic,readonly) BOOL shouldOutputFullwidthSpace; 
@property (nonatomic,copy) NSArray * statisticChanges;                                                       //@synthesize statisticChanges=_statisticChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)keyboardType;
-(NSString *)clientIdentifier;
-(unsigned long long)autocapitalizationType;
-(void)setKeyboardType:(unsigned long long)arg1 ;
-(void)setAutocapitalizationType:(unsigned long long)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSUUID *)documentIdentifier;
-(void)setDocumentIdentifier:(NSUUID *)arg1 ;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(TIDocumentState *)documentState;
-(int)shiftState;
-(NSString *)inputMode;
-(BOOL)hardwareKeyboardMode;
-(void)setHardwareKeyboardMode:(BOOL)arg1 ;
-(BOOL)userSelectedCurrentCandidate;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(NSString *)searchStringForMarkedText;
-(void)setSearchStringForMarkedText:(NSString *)arg1 ;
-(void)setInputMode:(NSString *)arg1 ;
-(BOOL)shouldSkipCandidateSelection;
-(void)setShouldSkipCandidateSelection:(BOOL)arg1 ;
-(BOOL)suppressingCandidateSelection;
-(void)setSuppressingCandidateSelection:(BOOL)arg1 ;
-(BOOL)needsCandidateMetadata;
-(void)setNeedsCandidateMetadata:(BOOL)arg1 ;
-(BOOL)keyboardEventsLagging;
-(void)setKeyboardEventsLagging:(BOOL)arg1 ;
-(BOOL)splitKeyboardMode;
-(void)setSplitKeyboardMode:(BOOL)arg1 ;
-(BOOL)floatingKeyboardMode;
-(void)setFloatingKeyboardMode:(BOOL)arg1 ;
-(BOOL)landscapeOrientation;
-(void)setLandscapeOrientation:(BOOL)arg1 ;
-(BOOL)wordLearningEnabled;
-(void)setWordLearningEnabled:(BOOL)arg1 ;
-(BOOL)omitEmojiCandidates;
-(void)setOmitEmojiCandidates:(BOOL)arg1 ;
-(BOOL)emojiSearchMode;
-(void)setEmojiSearchMode:(BOOL)arg1 ;
-(BOOL)emojiPopoverMode;
-(void)setEmojiPopoverMode:(BOOL)arg1 ;
-(BOOL)autocorrectionEnabled;
-(void)setAutocorrectionEnabled:(BOOL)arg1 ;
-(BOOL)shortcutConversionEnabled;
-(void)setShortcutConversionEnabled:(BOOL)arg1 ;
-(BOOL)candidateSelectionPredictionEnabled;
-(void)setCandidateSelectionPredictionEnabled:(BOOL)arg1 ;
-(BOOL)autocapitalizationEnabled;
-(void)setAutocapitalizationEnabled:(BOOL)arg1 ;
-(NSString *)recipientIdentifier;
-(NSString *)responseContext;
-(void)_createTextInputTraitsIfNecessary;
-(BOOL)secureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(BOOL)autocorrectionListUIDisplayed;
-(void)setAutocorrectionListUIDisplayed:(BOOL)arg1 ;
-(BOOL)autocorrectionListUIAutoDisplayMode;
-(void)setAutocorrectionListUIAutoDisplayMode:(BOOL)arg1 ;
-(BOOL)canSendCurrentLocation;
-(void)setCanSendCurrentLocation:(BOOL)arg1 ;
-(BOOL)isScreenLocked;
-(void)setIsScreenLocked:(BOOL)arg1 ;
-(BOOL)longPredictionListEnabled;
-(void)setLongPredictionListEnabled:(BOOL)arg1 ;
-(BOOL)needAutofill;
-(void)setNeedAutofill:(BOOL)arg1 ;
-(BOOL)needOneTimeCodeAutofill;
-(BOOL)needContactAutofill;
-(void)setNeedOneTimeCodeAutofill:(BOOL)arg1 ;
-(BOOL)shouldOutputFullwidthSpace;
-(NSArray *)auxiliaryInputModeLanguages;
-(void)setAuxiliaryInputModeLanguages:(NSArray *)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(TIInputContextHistory *)inputContextHistory;
-(void)setInputContextHistory:(TIInputContextHistory *)arg1 ;
-(void)setShiftState:(int)arg1 ;
-(TIKeyboardLayoutState *)layoutState;
-(void)setLayoutState:(TIKeyboardLayoutState *)arg1 ;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(TIKeyboardSecureCandidateRenderTraits *)secureCandidateRenderTraits;
-(void)setSecureCandidateRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg1 ;
-(NSString *)inputForMarkedText;
-(void)setInputForMarkedText:(NSString *)arg1 ;
-(TIKeyboardCandidate *)currentCandidate;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(void)setResponseContext:(NSString *)arg1 ;
-(unsigned long long)autofillMode;
-(void)setAutofillMode:(unsigned long long)arg1 ;
-(NSDictionary *)autofillContext;
-(void)setAutofillContext:(NSDictionary *)arg1 ;
-(NSArray *)supportedPayloadIds;
-(void)setSupportedPayloadIds:(NSArray *)arg1 ;
-(NSArray *)statisticChanges;
-(void)setStatisticChanges:(NSArray *)arg1 ;
@end

