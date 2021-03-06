/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SIRINLUUserDialogAct.h>

@class USOSerializedGraph;

@interface SIRINLUUserStatedTask : NSObject <SIRINLUUserDialogAct> {

	USOSerializedGraph* _task;
	USOSerializedGraph* _goal;

}

@property (nonatomic,retain) USOSerializedGraph * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) USOSerializedGraph * goal;              //@synthesize goal=_goal - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(USOSerializedGraph *)task;
-(void)setTask:(USOSerializedGraph *)arg1 ;
-(void)setGoal:(USOSerializedGraph *)arg1 ;
-(USOSerializedGraph *)goal;
-(id)initWithGoal:(id)arg1 ;
@end

