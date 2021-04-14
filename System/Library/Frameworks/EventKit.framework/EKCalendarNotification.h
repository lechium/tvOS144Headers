/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSURL, EKObjectID, EKSource, EKEvent;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {

	long long _type;
	NSString* _title;
	NSString* _name;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	NSURL* _URL;
	EKObjectID* _objectID;
	CGColorRef _dotColor;
	BOOL _hiddenFromNotificationCenter;
	BOOL _alerted;
	BOOL _couldBeJunk;
	EKSource* _source;
	NSString* _firstName;
	NSString* _lastName;
	EKEvent* _event;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                        //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) EKObjectID * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) CGColorRef dotColor;                            //@synthesize dotColor=_dotColor - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromNotificationCenter;              //@synthesize hiddenFromNotificationCenter=_hiddenFromNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL alerted;                                   //@synthesize alerted=_alerted - In the implementation block
@property (nonatomic,readonly) BOOL needsAlert; 
@property (assign,nonatomic) BOOL couldBeJunk;                               //@synthesize couldBeJunk=_couldBeJunk - In the implementation block
@property (nonatomic,retain) EKSource * source;                              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(EKSource *)source;
-(NSString *)uniqueIdentifier;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setSource:(EKSource *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(EKObjectID *)objectID;
-(EKEvent *)event;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setObjectID:(EKObjectID *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setHiddenFromNotificationCenter:(BOOL)arg1 ;
-(void)setAlerted:(BOOL)arg1 ;
-(void)setDotColor:(CGColorRef)arg1 ;
-(BOOL)couldBeJunk;
-(void)setCouldBeJunk:(BOOL)arg1 ;
-(BOOL)alerted;
-(BOOL)isSharedCalendarInvitation;
-(BOOL)needsAlert;
-(BOOL)isInvitation;
-(BOOL)acknowledgeWithEventStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)isProposedNewTime;
-(BOOL)proposedStartDateIsInFutureForAttendee:(id)arg1 ;
-(CGColorRef)dotColor;
-(BOOL)hiddenFromNotificationCenter;
@end

