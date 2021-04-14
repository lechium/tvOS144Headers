/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSISVariable, NSString;

@interface NSISPlaybackOperationVariableDelegate : NSObject {

	NSISVariable* _variable;
	NSString* _variableDescription;
	NSString* _markedConstraintDescription;
	BOOL _variableIsUserObservable;
	int _orientationHint;

}

@property (retain) NSISVariable * variable;                           //@synthesize variable=_variable - In the implementation block
@property (copy) NSString * variableDescription;                      //@synthesize variableDescription=_variableDescription - In the implementation block
@property (copy) NSString * markedConstraintDescription;              //@synthesize markedConstraintDescription=_markedConstraintDescription - In the implementation block
@property (assign) BOOL variableIsUserObservable;                     //@synthesize variableIsUserObservable=_variableIsUserObservable - In the implementation block
@property (assign) int orientationHint;                               //@synthesize orientationHint=_orientationHint - In the implementation block
-(id)description;
-(void)dealloc;
-(NSISVariable *)variable;
-(id)firstItem;
-(id)secondItem;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(int)orientationHint;
-(void)_addToEngine:(id)arg1 ;
-(NSString *)variableDescription;
-(BOOL)variableIsUserObservable;
-(NSString *)markedConstraintDescription;
-(void)setVariable:(NSISVariable *)arg1 ;
-(void)setVariableDescription:(NSString *)arg1 ;
-(void)setMarkedConstraintDescription:(NSString *)arg1 ;
-(void)setVariableIsUserObservable:(BOOL)arg1 ;
-(void)setOrientationHint:(int)arg1 ;
@end

