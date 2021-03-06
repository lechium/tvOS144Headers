/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying> {

	BOOL _running;
	BOOL _foreground;
	BOOL _debugging;
	int _pid;
	long long _taskState;
	long long _visibility;

}

@property (assign,nonatomic) int pid;                                            //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) long long taskState;                                //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) long long visibility;                               //@synthesize visibility=_visibility - In the implementation block
@property (assign,getter=isDebugging,nonatomic) BOOL debugging;                  //@synthesize debugging=_debugging - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                    //@synthesize running=_running - In the implementation block
@property (getter=isForeground,nonatomic,readonly) BOOL foreground;              //@synthesize foreground=_foreground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)setVisibility:(long long)arg1 ;
-(BOOL)isRunning;
-(long long)visibility;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(long long)taskState;
-(BOOL)isDebugging;
-(id)initWithPid:(int)arg1 ;
-(BOOL)isForeground;
-(void)setTaskState:(long long)arg1 ;
-(void)setDebugging:(BOOL)arg1 ;
@end

