/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFAppendVariableAction : WFAction
-(id)variableName;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)providedVariableNames;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(id)accessibilityName;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
@end

