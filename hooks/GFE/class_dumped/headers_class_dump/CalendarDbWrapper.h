//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface CalendarDbWrapper : NSObject
{
    struct UIAListener *listener;
    BOOL _isDomino;
    int _allDayEventStartHour;
    int _allDayEventEndHour;
}

+ (id)sharedCalendarDb;
@property(readonly, nonatomic) BOOL isDomino; // @synthesize isDomino=_isDomino;
@property(readonly, nonatomic) int allDayEventEndHour; // @synthesize allDayEventEndHour=_allDayEventEndHour;
@property(readonly, nonatomic) int allDayEventStartHour; // @synthesize allDayEventStartHour=_allDayEventStartHour;
- (void)dealloc;
- (BOOL)serverSupportsCalendarAttachments;
- (int)debugDump;
- (int)debugDeleteAllContent;
- (int)debugGetRecordCount;
- (void)debugAddRandomEvents:(int)arg1;
- (void)debugAddRandomEvents:(int)arg1 withStartDate:(id)arg2 endDate:(id)arg3;
- (void)debugAddRecurringEvents:(int)arg1 withStartDate:(id)arg2 endDate:(id)arg3;
- (BOOL)isSelfRecurringConflictFor:(id)arg1 withOldDate:(id)arg2 andNewDate:(id)arg3;
- (BOOL)removeFromEmail:(id)arg1;
- (id)dominoFindMeetingRequestListFromEmail:(id)arg1;
- (id)getAppointmentFromGoodId:(unsigned long)arg1 andInstance:(long)arg2;
- (void)respondToMeetingRequestFromCalendar:(id)arg1 response:(int)arg2 notes:(id)arg3 sendEmail:(BOOL)arg4 forAllOccurrences:(BOOL)arg5;
- (void)processMeetingRequestFromEmail:(id)arg1 response:(int)arg2 notes:(id)arg3 sendEmail:(BOOL)arg4 processList:(BOOL)arg5 fromList:(id)arg6;
- (void)updateAppointment:(id)arg1;
- (BOOL)respondToMeetingRequestFromEmail:(id)arg1 response:(int)arg2 notes:(id)arg3 sendEmail:(BOOL)arg4;
- (BOOL)isSendEmailNeeded:(id)arg1 appointment:(id)arg2;
- (BOOL)isMeetingRequestOutOfDate:(id)arg1 appointment:(id)arg2;
- (BOOL)amITheOrganizer:(id)arg1;
- (void)createMeetingNoneFromEmail:(id)arg1 recNum:(int)arg2;
- (int)findConflicts:(id)arg1;
- (id)getAppointmentFromEmail:(id)arg1;
- (id)findAppointmentsForRecordId:(unsigned int)arg1 startDate:(id)arg2 numberOfDays:(int)arg3;
- (id)findAppointmentsForPeriod:(id)arg1 numberOfDays:(int)arg2 useCache:(BOOL)arg3;
- (id)findAppointmentsForPeriod:(id)arg1 numberOfDays:(int)arg2;
- (id)findAppointmentsForDay:(id)arg1;
- (void)deleteAppointment:(id)arg1 applyAll:(BOOL)arg2;
- (void)saveAppointment:(id)arg1 applyAll:(BOOL)arg2;
- (void)copyRecordTZInfoTo:(struct ACalendarRecord *)arg1 from:(const struct ACalendarRecord *)arg2;
- (void)updateRecordTZInfo:(struct ACalendarRecord *)arg1;
- (void)saveInviteesFrom:(id)arg1 to:(struct ACalendarRecord *)arg2;
- (BOOL)createExceptionForWrapper:(id)arg1 withRecord:(struct ACalendarRecord *)arg2 andTemplate:(struct ACalendarRecord *)arg3 applyingTo:(int)arg4 recordWasCopied:(char *)arg5;
- (void)setListener:(id)arg1 withSelector:(SEL)arg2;
- (id)startup;
@property(readonly, nonatomic) struct ACalendar *calendarDb;

@end
