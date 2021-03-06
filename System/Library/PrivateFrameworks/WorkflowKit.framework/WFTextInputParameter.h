/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSString;

@interface WFTextInputParameter : WFParameter <WFParameterDialogProvider> {

	BOOL _secureTextEntry;
	BOOL _smartQuotesDisabled;
	BOOL _smartDashesDisabled;
	BOOL _multiline;
	BOOL _processesIntoContentItems;
	NSString* _textContentType;
	NSString* _prefix;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _textAlignment;
	unsigned long long _hintDisplayMode;
	unsigned long long _syntaxHighlightingType;

}

@property (nonatomic,copy) NSString * prefix;                                              //@synthesize prefix=_prefix - In the implementation block
@property (getter=isSecureTextEntry,nonatomic,readonly) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy,readonly) NSString * textContentType;                            //@synthesize textContentType=_textContentType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;                           //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                               //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) BOOL smartQuotesDisabled;                                   //@synthesize smartQuotesDisabled=_smartQuotesDisabled - In the implementation block
@property (nonatomic,readonly) BOOL smartDashesDisabled;                                   //@synthesize smartDashesDisabled=_smartDashesDisabled - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (getter=isMultiline,nonatomic,readonly) BOOL multiline;                          //@synthesize multiline=_multiline - In the implementation block
@property (nonatomic,readonly) unsigned long long hintDisplayMode;                         //@synthesize hintDisplayMode=_hintDisplayMode - In the implementation block
@property (nonatomic,readonly) unsigned long long syntaxHighlightingType;                  //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
@property (nonatomic,readonly) BOOL processesIntoContentItems;                             //@synthesize processesIntoContentItems=_processesIntoContentItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)keyboardType;
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)textContentType;
-(BOOL)isMultiline;
-(BOOL)isSecureTextEntry;
-(long long)textAlignment;
-(void)setLocalizedPlaceholder:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(BOOL)smartQuotesDisabled;
-(BOOL)smartDashesDisabled;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
-(BOOL)shouldAlignLabels;
-(id)hintForState:(id)arg1 ;
-(id)createDialogTextFieldConfigurationWithDefaultState:(id)arg1 ;
-(unsigned long long)hintDisplayMode;
-(unsigned long long)syntaxHighlightingType;
-(BOOL)processesIntoContentItems;
@end

