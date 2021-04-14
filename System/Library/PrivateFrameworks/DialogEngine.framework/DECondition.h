/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSArray;

@interface DECondition : NSObject {

	shared_ptr<siri::dialogengine::Condition>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Condition>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSArray * entries; 
-(NSString *)name;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)entries;
-(BOOL)validate:(id)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(void)addEntry:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)getSharedPtr;
@end

