/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFContactFieldParameter : WFParameter {

	BOOL _allowsTextEntry;
	BOOL _hidesLabel;
	long long _textAlignment;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	NSArray* _supportedContactProperties;

}

@property (nonatomic,readonly) BOOL allowsTextEntry;                              //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType; 
@property (nonatomic,readonly) long long textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;                  //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                      //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) NSArray * supportedContactProperties;              //@synthesize supportedContactProperties=_supportedContactProperties - In the implementation block
@property (nonatomic,readonly) BOOL hidesLabel;                                   //@synthesize hidesLabel=_hidesLabel - In the implementation block
-(long long)keyboardType;
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(long long)textAlignment;
-(Class)stateClass;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(BOOL)displaysMultipleValueEditor;
-(Class)multipleStateClass;
-(BOOL)shouldAlignLabels;
-(BOOL)allowsTextEntry;
-(NSArray *)supportedContactProperties;
-(BOOL)hidesLabel;
@end

